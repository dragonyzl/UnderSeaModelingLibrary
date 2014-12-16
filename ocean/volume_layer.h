/**
 * @file volume_layer.h
 */

#ifndef USML_OCEAN_VOLUME_LAYER_H
#define USML_OCEAN_VOLUME_LAYER_H

#include <usml/ocean/boundary_model.h>
#include <usml/ocean/scattering_model.h>

namespace usml {
namespace ocean {

using namespace usml::ocean ;

class USML_DECLSPEC volume_layer {

    public:

        /** Constructor **/
        volume_layer( vector<boundary_model*> layers ) :
            _layers(layers)
        {
            _num_layers = _layers.size() ;
        }

        /** Destructor **/
        virtual ~volume_layer() {
            for(vector<boundary_model*>::iterator i=_layers.begin();
                    i!=_layers.end(); ++i)
            {
                    delete *i ;
            }
        }

        /** Layer Accessor **/
        inline boundary_model* getLayer( unsigned n ) {
            return _layers(n) ;
        }

        /** Number of layers accessor **/
        inline unsigned getNumberOfLayers() {
            return _num_layers ;
        }

    private:

        /** Volume Layers **/
        vector<boundary_model*> _layers ;

        /** Number of layers **/
        unsigned _num_layers ;


};

}   // end of namespace ocean
}   // end of namespace usml

#endif