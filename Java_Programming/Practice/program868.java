import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.io.*;

class program868
{
    public static void main(String A[])
    {
        StudyTracker stobj = new StudyTracker();
        Scanner sobj = new Scanner(System.in);
        int iChoice = 0;

        System.out.println("-------------------------------------------------------");
        System.out.println("----------Welcome to Marvellous Study Tracker----------");
        System.out.println("-------------------------------------------------------");

        do
        {
            System.out.println("-------------------------------------------------------");
            System.out.println("Please Select the Appropriate option: ");
            System.out.println("-------------------------------------------------------");
            System.out.println("1 : Insert new Study Log");
            System.out.println("2 : View all Study Log");
            System.out.println("3 : Export Study Log to CSV");
            System.out.println("4 : Summary of Study Log by date");
            System.out.println("5: Summary of Study Log by Subject");
            System.out.println("6 : Exit the Application");
            System.out.println("-------------------------------------------------------");

            iChoice = sobj.nextInt();

            switch(iChoice)
            {
                // Insert new log
                case 1:
                    stobj.InsertLog();
                    break;

                // View all Study Log
                case 2:
                    stobj.DisplayLog();
                    break;

                // Export to CSV
                case 3:
                    stobj.ExportToCSV();
                    break;

                // Summary by Date
                case 4:
                    stobj.SummaryByDate();
                    break;

                // Summary by subject
                case 5:
                    stobj.SummaryBySubject();
                    break;

                // End of Project
                case 6:

                    break;

                default:
                    System.out.println("Please enter valid option");
                    break;
            }

        }while(iChoice != 6);

        System.out.println("-------------------------------------------------------");
        System.out.println("-----------Thank You for using Study Tracker-----------");
        System.out.println("-------------------------------------------------------");


    } // end of main
} // end of class

class StudyTracker
{
    public ArrayList<StudyLog> Database;
    

    public StudyTracker()
    {
        Database = new ArrayList<StudyLog>();
    }

    public void InsertLog()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------------------------------------------------------");
        System.out.println("------------Enter the Details of your Study------------");
        System.out.println("-------------------------------------------------------");

        LocalDate lobj = LocalDate.now();

        System.out.println("We are entering the date as : "+ lobj);
        System.out.println("Enter the name of Subject : ");
        String sub = sobj.nextLine();

        System.out.println("Enter the Time Period of your study : ");
        double dur = sobj.nextDouble();

        sobj.nextLine();

        System.out.println("Please provide the description of your study : ");
        String desc = sobj.nextLine();

        StudyLog studyobj = new StudyLog(lobj,sub,dur,desc);

        Database.add(studyobj);

        System.out.println("Study Log gets Inserted Successfully");

        System.out.println("-------------------------------------------------------");

    }

    public void DisplayLog()
    {
        if(Database.isEmpty())
        {
            System.out.println("-------------------------------------------------------");
            System.out.println("Nothing to Display - Database is empty");
            System.out.println("-------------------------------------------------------");
            return;
        }

        System.out.println("-------------------------------------------------------");
        System.out.println("---------Log Report of Marvellous Study Tracker--------");
        System.out.println("-------------------------------------------------------");

        for(StudyLog s : Database)
        {
            System.out.println(s);
        }

        System.out.println("-------------------------------------------------------");
    }

    public void ExportToCSV()
    {
        String FileName = "MarvellousStudyTracker.csv";

        if(Database.isEmpty())
        {
            System.out.println("-------------------------------------------------------");
            System.out.println("Nothing to Export - Database is empty");
            System.out.println("-------------------------------------------------------");
            return;
        }

        try(FileWriter fwobj = new FileWriter(FileName))
        {
            fwobj.write("Date,Subject,Duration,Description of Study \n");

            for(StudyLog s : Database)
            {
                fwobj.write(s.getDate()+","+
                s.getSubject()+","+
                s.getDuration()+","+
                s.getDescription()+"\n");
            }

            System.out.println("-------------------------------------------------------");            
            System.out.println("Data gets exported to CSV successfully");
            System.out.println("-------------------------------------------------------");

            fwobj.close();
        }
        catch(IOException iobj)
        {
            System.out.println(iobj);
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
        
    }

    public void SummaryByDate()
    {
        System.out.println("-------------------------------------------------------");
        System.out.println("Summary By Date from Study Tracker");
        System.out.println("-------------------------------------------------------");

        TreeMap <LocalDate, Double> tobj = new TreeMap<LocalDate, Double>();

        LocalDate lobj = null;
        double d = 0.0;

        double old = 0.0;

        for(StudyLog s : Database)
        {
            lobj = s.getDate();
            d = s.getDuration();

            if(tobj.containsKey(lobj))
            {
                old = tobj.get(lobj);
                tobj.put(lobj,d+old);
            }
            else
            {
                tobj.put(lobj,d);
            }
        }

        // Display The Details as per Date

        for(LocalDate l : tobj.keySet())
        {
            System.out.println("Date : "+l+" Total Study Duration : " + tobj.get(l));
        }

        System.out.println("-------------------------------------------------------");
    }

    public void SummaryBySubject()
    {
        System.out.println("-------------------------------------------------------");
        System.out.println("Summary By Subject from Study Tracker");
        System.out.println("-------------------------------------------------------");

        TreeMap <String, Double> tobj = new TreeMap<String, Double>();

        String sobj = null;
        double d = 0.0;

        double old = 0.0;

        for(StudyLog s : Database)
        {
            sobj = s.getSubject();
            d = s.getDuration();

            if(tobj.containsKey(sobj))
            {
                old = tobj.get(sobj);
                tobj.put(sobj,d+old);
            }
            else
            {
                tobj.put(sobj,d);
            }
        }

        // Display The Details as per Subject

        for(String str : tobj.keySet())
        {
            System.out.println("Subject : "+str+" Total Study Duration : " + tobj.get(str));
        }

        System.out.println("-------------------------------------------------------");
    }

}

class StudyLog
{
    private LocalDate Date;
    private String Subject;
    private double Duration;
    private String Description;

    public StudyLog(LocalDate a, String b, double c, String d)
    {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;
    }

    @Override
    public String toString()
    {
        return Date + " | " + Subject + " | " + Duration + " | " + Description ;
    }

    // Getter Method
    public LocalDate getDate()
    {
        return this.Date;
    }
    public String getSubject()
    {
        return this.Subject;
    }
    public double getDuration()
    {
        return this.Duration;
    }
    public String getDescription()
    {
        return this.Description;
    }
}