
 #include <stdio.h>
 #include <time.h>
 #include <sys/time.h>
 #include <fcntl.h>


int main()
{
    char buffer[200];
    time_t now;
    time(&now);
    struct tm *mytime;
    // mytime = localtime(&now);
    // printf("%d\n",mytime->tm_mday);
    // printf("%d\n",mytime->tm_wday);
    // printf("The time is %lu\n",now);
    strftime(buffer,200,"%c",localtime(&now));

    struct timeval currnow;

    gettimeofday(&currnow, NULL);

    printf("the time in seconds is %lu\n", currnow.tv_sec);
    printf("the time in microseconds %lu \n",currnow.tv_usec);

    int fd = open("f1.txt",O_RDONLY);

      
    if(fd ==-1)
        perror("Error");    
    printf("File opened and fd value is %d\n",fd);

     fd = open("f2.txt",O_CREAT|O_WRONLY|O_RDWR,0777);
    
    printf("File opened and fd value is %d\n",fd);




    printf("%s\n",buffer);

    return 0;
}
