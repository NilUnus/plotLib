#ifndef MESH_H
	#define MESH_H
	#include <inttypes.h>
	#include "../base/vars.h"
	#include "../base/error_handling.h"
	void * plt_mesh_aux(int32_t layer_num);
	int32_t plt_mesh_req(plot_t * plt, const double * x, const double * y, const double * z);
	int32_t plt_mesh_draw(void * ptr, const double * x, const double * y, const double * z, int32_t layer, int32_t num_layers);
	void plt_mesh_layer(int32_t property, int32_t value);
	void plt_mesh_free_aux(void * ptr);
#endif
