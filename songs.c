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
    songs[11]=malloc(100);
    songs[11] = "bohemian rhapsody.mp3";
    songs[12]=malloc(100);
    songs[12] = "by the way.mp3";
    songs[13]=malloc(100);
    songs[13] = "crystalized.mp3";
    songs[14]=malloc(100);
    songs[14] = "in da club.mp3";
    songs[15]=malloc(100);
    songs[15] = "otherside.mp3";
    songs[16]=malloc(100);
    songs[16] = "the zoo.mp3";
    songs[17]=malloc(100);
    songs[17] = "wish u were here.mp3";

    char* names[10];
    names[0]=malloc(100);
    names[0] = "Bee Gees - Staying Alive";
    names[1]=malloc(100);
    names[1] = "Deadmau5 - Strobe";
    names[2]=malloc(100);
    names[2] = "Rush - Subdivisions";
    names[3]=malloc(100);
    names[3] = "System of a Down - Toxicity";
    names[4]=malloc(100);
    names[4] = "Daft Punk - Around the World";
    names[5]=malloc(100);
    names[5] = "Aerosmith - Dream On";
    names[6]=malloc(100);
    names[6] = "Coldplay - Fix you";
    names[7]=malloc(100);
    names[7] = "Bob Sinclair - Love Generation";
    names[8]=malloc(100);
    names[8] = "Bob Marley - No Woman no Cry";
    names[9]=malloc(100);
    names[9] = "The Police - Roxanne";
    names[10]=malloc(100);
    names[10] = "Muse - Starlight";
    names[11]=malloc(100);
    names[11] = "Queen - Bohemian Rhapsody";
    names[12]=malloc(100);
    names[12] = "Red Hot Chilli Peppers - By the Way";
    names[13]=malloc(100);
    names[13] = "The xx - Crystalized";
    names[14]=malloc(100);
    names[14] = "50 cent - In Da Club";
    names[15]=malloc(100);
    names[15] = "Red Hot Chilli Peppers - Otherside";
    names[16]=malloc(100);
    names[16] = "Scorpions - The Zoo";
    names[17]=malloc(100);
    names[17] = "Pink Floyd - Wish U Were Here";


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
