
#include "View.h"

	View::View(){
		size = 11;
		scale = 2;
		origin = Point2D(0, 0);
	}

	bool View::GetSubscripts(int &x_subscript, int &y_subscript, Point2D location){
		Vector2D temp = (location-origin) / scale;
		x_subscript = temp.x;
		y_subscript = temp.y;
		if ( (x_subscript >= 0 && x_subscript <= (size-1)) && (y_subscript >= 0 && y_subscript <= (size-1)) ){
			return true;
		}
		else {
			std::cout<< "An object is outside of the display"<<std::endl;
			return false;
		}
	}

	void View::Clear(){
		for (int i = 0; i < view_maxsize; i++){
			for (int j = 0; j < view_maxsize; j++){
				grid[i][j][0] = '.';
				grid[i][j][1] = ' ';
			}
		}	
	}

	void View::Plot(GameObject * ptr){
		int i, j;
		bool var;

		var = GetSubscripts(i, j, ptr->GetLocation());

		if (var && grid[i][j][0] == '.'){
			ptr->DrawSelf(grid[i][j]);
		}
		else if (var){
			grid[i][j][0] = '*';
			grid[i][j][1] = ' ';
		}
	}
/*
	void View::Draw(){
		for (int j = size-1; j >= -1; j--){
			for (int i = -1; i <= size-1; i++){
				//grid axis
				if (i == -1 && j%2 == 0){
					std::cout << j*2;
					if (j/5 == 0){
						std::cout << " ";
					}
				}
				else if (i == -1 && j%2 != 0){
					std::cout << "  ";
				}
				else if (j == -1 && i%2 == 0){
					std::cout << i*2;
					if (i/5 == 0){
						std::cout << " ";
					}
				}
					std::cout << "  ";
				//draw objects
				if (i >= 0 && j >=0){
					std::cout << grid[i][j][0] << grid[i][j][1];
				}
			}
		std::cout << std::endl;
		}
	}
*/
void View::Draw()
{
    for (int j = size-1; j >= -1; j--)
    {
        for (int i = -1; i <= size-1; i++)
        {
            //grid axis
            if (i == -1 && j%2 == 0)
            {
                std::cout << j*2;
                if (j/5 == 0)
                {
                    std::cout << " ";
                }
            }
            else if (i == -1 && j%2 != 0)
            {
                std::cout << "  ";
            }
            else if (j == -1 && i%2 == 0)
            {
                std::cout << i*2;
                if (i/5 == 0)
                {
                    std::cout << " ";
                }
                std::cout << "  ";
            }
            //draw objects
            if (i >= 0 && j >=0)
            {
                std::cout << grid[i][j][0] << grid[i][j][1];
            }
        }
        std::cout << std::endl;
    }
}
