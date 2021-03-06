#include "includes.h"
#define SOUND_FREQUENCY 44100

static Mix_Music *background_music = NULL;
//sound effect
static Mix_Chunk *bounce_sound = NULL;

/*
 * Initialises the Mixer and loads the background music
 * and bouncing sound
 * Prints appropriate messages in case of error
 */
void initialise_music() {
    if(Mix_OpenAudio(SOUND_FREQUENCY, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        fprintf(stderr, "SDL_mixer could not initialize!");
        exit(EXIT_FAILURE);
    }
    background_music = Mix_LoadMUS("background.wav");
    if(background_music == NULL) {
        printf("%s\n", Mix_GetError());
        fprintf(stderr, "Failed to load background music");
        exit(EXIT_FAILURE);
    }
    Mix_PlayMusic(background_music, -1); //play music
    bounce_sound = Mix_LoadWAV("bouncing.wav");
    if(bounce_sound == NULL) {
        fprintf(stderr, "Failed to load bounce sound");
        exit(EXIT_FAILURE);
    }
}

/*
 * Frees any memory associated for the music
 */
void destroy_music() {
    //Free sound effects
    Mix_FreeChunk(bounce_sound);
    bounce_sound = NULL;
    //Free music
    Mix_FreeMusic(background_music);
    background_music = NULL;
    //Quit SDL subsystem
    Mix_Quit();
}

/*
 * Plays the collision bouncing sound
 */
void play_collision_sound() {
    Mix_PlayChannel(-1, bounce_sound, 0);
}
