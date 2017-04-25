#include <ao/ao.h>
#include <mpg123.h>

#define BITS 8

int main(int argc, char *argv[])
{
    char* songs[10];
    songs[0]=malloc(100);
    songs[0] = "staying alive.mp3";
    songs[1]=malloc(100);
    songs[1] = "strobe.mp3";
    songs[2]=malloc(100);
    songs[2] = "subdivisions.mp3";
    songs[3]=malloc(100);
    songs[3] = "toxicity.mp3";
    songs[4]=malloc(100);
    songs[4] = "around the world.mp3";
    songs[5]=malloc(100);
    songs[5] = "dream on.mp3";
    songs[6]=malloc(100);
    songs[6] = "fix u.mp3";
    songs[7]=malloc(100);
    songs[7] = "love generation.mp3";
    songs[8]=malloc(100);
    songs[8] = "no woman no cry.mp3";
    songs[9]=malloc(100);
    songs[9] = "roxanne.mp3";
    songs[10]=malloc(100);
    songs[10] = "starlight.mp3";

    char* names[10];
    songs[0]=malloc(100);
    songs[0] = "staying alive";
    songs[1]=malloc(100);
    songs[1] = "strobe";
    songs[2]=malloc(100);
    songs[2] = "subdivisions";
    songs[3]=malloc(100);
    songs[3] = "toxicity";
    songs[4]=malloc(100);
    songs[4] = "around the world";
    songs[5]=malloc(100);
    songs[5] = "dream on";
    songs[6]=malloc(100);
    songs[6] = "fix u.mp3";
    songs[7]=malloc(100);
    songs[7] = "love generation";
    songs[8]=malloc(100);
    songs[8] = "no woman no cry";
    songs[9]=malloc(100);
    songs[9] = "roxanne";
    songs[10]=malloc(100);
    songs[10] = "starlight";


    mpg123_handle *mh;
    unsigned char *buffer;
    size_t buffer_size;
    size_t done;
    int err;

    int driver;
    ao_device *dev;

    ao_sample_format format;
    int channels, encoding;
    long rate;

int a;

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Welcome to SongTrivia \n");
    printf("\n");
    printf("\n");
    printf("⤐ You'll listen songs for a certain amount of time, \n");
    printf("and you'll have to guess what song it is. \n");
    printf("⤐ You will have 4 options and you'll earn points for every correct answer. \n");
    printf("\n");
    printf("\n");
    printf("⤐ Would you like to play? (y/n)\n");
    a = getchar();
    if(a == 'y'){

      printf("Guess the song: \n");

  for(int i = 0; i < 11; i++){
    int ran;

    srand(time(0));
    ran=rand()%10+1;

    /* initializations */
    ao_initialize();
    driver = ao_default_driver_id();
    mpg123_init();
    mh = mpg123_new(NULL, &err);
    buffer_size = mpg123_outblock(mh);
    buffer = (unsigned char*) malloc(buffer_size * sizeof(unsigned char));

    /* open the file and get the decoding format */

      mpg123_open(mh, songs[ran]);
      mpg123_getformat(mh, &rate, &channels, &encoding);

      /* set the output format and open the output device */
      format.bits = mpg123_encsize(encoding) * BITS;
      format.rate = rate;
      format.channels = channels;
      format.byte_format = AO_FMT_NATIVE;
      format.matrix = 0;
      dev = ao_open_live(driver, &format, NULL);

      /* decode and play */
      while (mpg123_read(mh, buffer, buffer_size, &done) == MPG123_OK)
          ao_play(dev, buffer, done);

      /* clean up */
      free(buffer);
      ao_close(dev);
      mpg123_close(mh);
      mpg123_delete(mh);
      mpg123_exit();
      ao_shutdown();
    }
  }else{
    printf("\n");
    printf("Goodbye. \n");
  }
    return 0;
}
