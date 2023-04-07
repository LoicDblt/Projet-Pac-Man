#ifndef COORDINATE_H
#define COORDINATE_H

#include <SDL.h>
#include <list>

class Coordinate
{
	private:

	public:
		/**
		 * =============== PERSONNAGE ========================
		 * La terminaison de chaque coordonnées à
		 * son sens (voir ci-dessous):
		 * b -> "base"
		 * r -> "right"
		 * l -> "left"
		 * d -> "down"
		 * u -> "up"
		 * 
		 * Format (x, y, w, h)
		*/
		// Coordonnées de Pacman
		inline static std::vector<SDL_Rect> pac_b{{3, 89, 16, 16}};
		inline static std::vector<SDL_Rect> pac_r{{20, 89, 15, 16}, {35, 89, 11, 16}};
		inline static std::vector<SDL_Rect> pac_l{{47, 89, 15, 16}, {63, 89, 11, 16}};
		inline static std::vector<SDL_Rect> pac_u{{75, 90, 16, 15}, {92, 94, 16, 11}};
		inline static std::vector<SDL_Rect> pac_d{{109, 90, 16, 15}, {126, 94, 16, 11}};
	
		// Coordonnées du Fantôme Rouge
		inline static std::vector<SDL_Rect> ghost_red_r{{3, 123, 15, 15}, {20, 123, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_red_l{{37, 123, 15, 15}, {54, 123, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_red_u{{71, 123, 15, 15}, {88, 123, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_red_d{{105, 123, 18, 15}, {122, 123, 15, 15}};

		// Coordonnées du Fantôme Rose
		inline static std::vector<SDL_Rect> ghost_pink_r{{3, 142, 15, 15}, {20, 142, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_pink_l{{37, 142, 15, 15}, {54, 142, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_pink_u{{71, 142, 15, 15}, {88, 142, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_pink_d{{105, 142, 15, 15},{122, 142, 15, 15}};

		// Coordonnées du Fantôme Bleu
		inline static std::vector<SDL_Rect> ghost_blue_r{{3, 159, 15, 15}, {20, 159, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_blue_l{{37, 159, 15, 15}, {54, 159, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_blue_u{{71, 159, 15, 15}, {88, 159, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_blue_d{{105, 159, 15, 15}, {122, 159, 15, 15}};

		// Coordonnées du Fantôme Orange
		inline static std::vector<SDL_Rect> ghost_orange_r{{3, 177, 15, 15}, {20, 177, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_orange_l{{37, 177, 15, 15}, {54, 177, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_orange_u{{71, 177, 15, 15}, {88, 177, 15, 15}};
		inline static std::vector<SDL_Rect> ghost_orange_d{{105, 177, 15, 15}, {122, 177, 15, 15}};

		/**
		 * =============== MURS ===============================
		*/
		inline static std::vector<SDL_Rect> walls{
			{17, 17, 24, 24},
			{48, 16, 24, 24},
			{80, 1, 8, 40},
			{96, 16, 23, 23},
			{128, 16, 23, 23}
		};
		

	public:
		Coordinate(/* args */);
		~Coordinate();
};

#endif
