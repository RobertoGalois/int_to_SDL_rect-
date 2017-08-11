void    check_SDL_Init(SDL_Surface* p_element)
{
        if (p_element == NULL)
        {
            fprintf(stderr, "Impossible de charger le mode vidéo : %s\n",
                    SDL_GetError());
    
            exit(EXIT_FAILURE);
        }
}
