#pragma once
#ifndef IUSE_H
#define IUSE_H

#include <memory>
#include <string>
#include <vector>

#include "enums.h"
#include "units.h"

class item;
class player;
class JsonObject;
class MonsterGenerator;

template<typename T> class ret_val;

struct iteminfo;
typedef std::string itype_id;
struct tripoint;

// iuse methods returning a bool indicating whether to consume a charge of the item being used.
class iuse
{
    public:
        // FOOD AND DRUGS (ADMINISTRATION)
        int sewage( player *, item *, bool, const tripoint & );
        int honeycomb( player *, item *, bool, const tripoint & );
        int royal_jelly( player *, item *, bool, const tripoint & );
        int caff( player *, item *, bool, const tripoint & );
        int atomic_caff( player *, item *, bool, const tripoint & );
        int alcohol_weak( player *, item *, bool, const tripoint & );
        int alcohol_medium( player *, item *, bool, const tripoint & );
        int alcohol_strong( player *, item *, bool, const tripoint & );
        int xanax( player *, item *, bool, const tripoint & );
        int smoking( player *, item *, bool, const tripoint & );
        int ecig( player *, item *, bool, const tripoint & );
        int antibiotic( player *, item *, bool, const tripoint & );
        int eyedrops( player *, item *, bool, const tripoint & );
        int fungicide( player *, item *, bool, const tripoint & );
        int antifungal( player *, item *, bool, const tripoint & );
        int antiparasitic( player *, item *, bool, const tripoint & );
        int anticonvulsant( player *, item *, bool, const tripoint & );
        int weed_brownie( player *, item *, bool, const tripoint & );
        int coke( player *, item *, bool, const tripoint & );
        int meth( player *, item *, bool, const tripoint & );
        int vaccine( player *, item *, bool, const tripoint & );
        int flu_vaccine( player *, item *, bool, const tripoint & );
        int poison( player *, item *, bool, const tripoint & );
        int meditate( player *, item *, bool, const tripoint & );
        int thorazine( player *, item *, bool, const tripoint & );
        int prozac( player *, item *, bool, const tripoint & );
        int sleep( player *, item *, bool, const tripoint & );
        int datura( player *, item *, bool, const tripoint & );
        int flumed( player *, item *, bool, const tripoint & );
        int flusleep( player *, item *, bool, const tripoint & );
        int inhaler( player *, item *, bool, const tripoint & );
        int blech( player *, item *, bool, const tripoint & );
        int plantblech( player *, item *, bool, const tripoint & );
        int chew( player *, item *, bool, const tripoint & );
        int purifier( player *, item *, bool, const tripoint & );
        int purify_iv( player *, item *, bool, const tripoint & );
        int purify_smart( player *, item *, bool, const tripoint & );
        int marloss( player *, item *, bool, const tripoint & );
        int marloss_seed( player *, item *, bool, const tripoint & );
        int marloss_gel( player *, item *, bool, const tripoint & );
        int mycus( player *, item *, bool, const tripoint & );
        int dogfood( player *, item *, bool, const tripoint & );
        int catfood( player *, item *, bool, const tripoint & );
        int feedcattle( player *, item *, bool, const tripoint & );
        int feedbird( player *, item *, bool, const tripoint & );
        // TOOLS
        int sew_advanced( player *, item *, bool, const tripoint & );
        int extinguisher( player *, item *, bool, const tripoint & );
        int hammer( player *, item *, bool, const tripoint & );
        int water_purifier( player *, item *, bool, const tripoint & );
        int directional_antenna( player *, item *, bool, const tripoint & );
        int radio_off( player *, item *, bool, const tripoint & );
        int radio_on( player *, item *, bool, const tripoint & );
        int noise_emitter_off( player *, item *, bool, const tripoint & );
        int noise_emitter_on( player *, item *, bool, const tripoint & );
        int ma_manual( player *, item *, bool, const tripoint & );
        int crowbar( player *, item *, bool, const tripoint & );
        int makemound( player *, item *, bool, const tripoint & );
        int dig( player *, item *, bool, const tripoint & );
        int fill_pit( player *, item *, bool, const tripoint & );
        int clear_rubble( player *, item *, bool, const tripoint & );
        int siphon( player *, item *, bool, const tripoint & );
        int chainsaw_off( player *, item *, bool, const tripoint & );
        int chainsaw_on( player *, item *, bool, const tripoint & );
        int elec_chainsaw_off( player *, item *, bool, const tripoint & );
        int elec_chainsaw_on( player *, item *, bool, const tripoint & );
        int cs_lajatang_off( player *, item *, bool, const tripoint & );
        int cs_lajatang_on( player *, item *, bool, const tripoint & );
        int ecs_lajatang_off( player *, item *, bool, const tripoint & );
        int ecs_lajatang_on( player *, item *, bool, const tripoint & );
        int carver_off( player *, item *, bool, const tripoint & );
        int carver_on( player *, item *, bool, const tripoint & );
        int trimmer_off( player *, item *, bool, const tripoint & );
        int trimmer_on( player *, item *, bool, const tripoint & );
        int circsaw_on( player *, item *, bool, const tripoint & );
        int combatsaw_off( player *, item *, bool, const tripoint & );
        int combatsaw_on( player *, item *, bool, const tripoint & );
        int e_combatsaw_off( player *, item *, bool, const tripoint & );
        int e_combatsaw_on( player *, item *, bool, const tripoint & );
        int jackhammer( player *, item *, bool, const tripoint & );
        int pickaxe( player *, item *, bool, const tripoint & );
        int geiger( player *, item *, bool, const tripoint & );
        int teleport( player *, item *, bool, const tripoint & );
        int can_goo( player *, item *, bool, const tripoint & );
        int throwable_extinguisher_act( player *, item *, bool, const tripoint & );
        int directional_hologram( player *, item *, bool, const tripoint & );
        int capture_monster_veh( player *, item *, bool, const tripoint & );
        int capture_monster_act( player *, item *, bool, const tripoint & );
        int granade( player *, item *, bool, const tripoint & );
        int granade_act( player *, item *, bool, const tripoint & );
        int c4( player *, item *, bool, const tripoint & );
        int arrow_flamable( player *, item *, bool, const tripoint & );
        int acidbomb_act( player *, item *, bool, const tripoint & );
        int grenade_inc_act( player *, item *, bool, const tripoint & );
        int molotov_lit( player *, item *, bool, const tripoint & );
        int firecracker_pack( player *, item *, bool, const tripoint & );
        int firecracker_pack_act( player *, item *, bool, const tripoint & );
        int firecracker( player *, item *, bool, const tripoint & );
        int firecracker_act( player *, item *, bool, const tripoint & );
        int mininuke( player *, item *, bool, const tripoint & );
        int pheromone( player *, item *, bool, const tripoint & );
        int portal( player *, item *, bool, const tripoint & );
        int tazer( player *, item *, bool, const tripoint & );
        int tazer2( player *, item *, bool, const tripoint & );
        int shocktonfa_off( player *, item *, bool, const tripoint & );
        int shocktonfa_on( player *, item *, bool, const tripoint & );
        int mp3( player *, item *, bool, const tripoint & );
        int mp3_on( player *, item *, bool, const tripoint & );
        int gasmask( player *, item *, bool, const tripoint & );
        int portable_game( player *, item *, bool, const tripoint & );
        int vibe( player *, item *, bool, const tripoint & );
        int vortex( player *, item *, bool, const tripoint & );
        int dog_whistle( player *, item *, bool, const tripoint & );
        int blood_draw( player *, item *, bool, const tripoint & );
        static void cut_log_into_planks( player & );
        int lumber( player *, item *, bool, const tripoint & );
        int chop_tree( player *, item *, bool, const tripoint & );
        int chop_logs( player *, item *, bool, const tripoint & );
        int oxytorch( player *, item *, bool, const tripoint & );
        int hacksaw( player *, item *, bool, const tripoint & );
        int torch_lit( player *, item *, bool, const tripoint & );
        int battletorch_lit( player *, item *, bool, const tripoint & );
        int boltcutters( player *, item *, bool, const tripoint & );
        int mop( player *, item *, bool, const tripoint & );
        int spray_can( player *, item *, bool, const tripoint & );
        int heatpack( player *, item *, bool, const tripoint & );
        int heat_food( player *, item *, bool, const tripoint & );
        int hotplate( player *, item *, bool, const tripoint & );
        int towel( player *, item *, bool, const tripoint & );
        int unfold_generic( player *, item *, bool, const tripoint & );
        int adrenaline_injector( player *, item *, bool, const tripoint & );
        int jet_injector( player *, item *, bool, const tripoint & );
        int stimpack( player *, item *, bool, const tripoint & );
        int contacts( player *, item *, bool, const tripoint & );
        int talking_doll( player *, item *, bool, const tripoint & );
        int bell( player *, item *, bool, const tripoint & );
        int seed( player *, item *, bool, const tripoint & );
        int oxygen_bottle( player *, item *, bool, const tripoint & );
        int radio_mod( player *, item *, bool, const tripoint & );
        int remove_all_mods( player *, item *, bool, const tripoint & );
        int fishing_rod( player *, item *, bool, const tripoint & );
        int fish_trap( player *, item *, bool, const tripoint & );
        int gun_repair( player *, item *, bool, const tripoint & );
        int gunmod_attach( player *, item *, bool, const tripoint & );
        int toolmod_attach( player *, item *, bool, const tripoint & );
        int misc_repair( player *, item *, bool, const tripoint & );
        int rm13armor_off( player *, item *, bool, const tripoint & );
        int rm13armor_on( player *, item *, bool, const tripoint & );
        int unpack_item( player *, item *, bool, const tripoint & );
        int pack_item( player *, item *, bool, const tripoint & );
        int radglove( player *, item *, bool, const tripoint & );
        int robotcontrol( player *, item *, bool, const tripoint & );
        int einktabletpc( player *, item *, bool, const tripoint & );
        int camera( player *, item *, bool, const tripoint & );
        int ehandcuffs( player *, item *, bool, const tripoint & );
        int cable_attach( player *, item *, bool, const tripoint & );
        int shavekit( player *, item *, bool, const tripoint & );
        int hairkit( player *, item *, bool, const tripoint & );
        int weather_tool( player *, item *, bool, const tripoint & );
        int ladder( player *, item *, bool, const tripoint & );
        int washclothes( player *, item *, bool, const tripoint & );
        int solarpack( player *, item *, bool, const tripoint & );
        int solarpack_off( player *, item *, bool, const tripoint & );
        int break_stick( player *, item *, bool, const tripoint & );
        int weak_antibiotic( player *, item *, bool, const tripoint & );
        int strong_antibiotic( player *, item *, bool, const tripoint & );
        int panacea( player *, item *, bool, const tripoint & );
        int magnesium_tablet( player *, item *, bool, const tripoint & );
        int coin_flip( player *, item *, bool, const tripoint & );
        int magic_8_ball( player *, item *, bool, const tripoint & );

        // MACGUFFINS

        int radiocar( player *, item *, bool, const tripoint & );
        int radiocaron( player *, item *, bool, const tripoint & );
        int radiocontrol( player *, item *, bool, const tripoint & );

        int multicooker( player *, item *, bool, const tripoint & );

        int remoteveh( player *, item *, bool, const tripoint & );

        int disassemble( player *, item *, bool, const tripoint & );

        // ARTIFACTS
        /* This function is used when an artifact is activated.
           It examines the item's artifact-specific properties.
           See artifact.h for a list.                        */
        int artifact( player *, item *, bool, const tripoint & );

        // Helper for listening to music, might deserve a better home, but not sure where.
        static void play_music( player &p, const tripoint &source, int volume, int max_morale );

        // Helper for handling pesky wannabe-artists
        static int handle_ground_graffiti( player &p, item *it, const std::string &prefix );

};

// Helper for clothes washing
struct washing_requirements {
    int water;
    int cleanser;
    int time;
};
washing_requirements washing_requirements_for_volume( units::volume );

typedef int ( iuse::*use_function_pointer )( player *, item *, bool, const tripoint & );

class iuse_actor
{

    protected:
        iuse_actor( const std::string &type, long cost = -1 ) : type( type ), cost( cost ) {}

    public:
        /**
         * The type of the action. It's not translated. Different iuse_actor instances may have the
         * same type, but different data.
         */
        const std::string type;

        /** Units of ammo required per invocation (or use value from base item if negative) */
        long cost;

        virtual ~iuse_actor() = default;
        virtual void load( JsonObject &jo ) = 0;
        virtual long use( player &, item &, bool, const tripoint & ) const = 0;
        virtual ret_val<bool> can_use( const player &, const item &, bool, const tripoint & ) const;
        virtual void info( const item &, std::vector<iteminfo> & ) const {}
        /**
         * Returns a deep copy of this object. Example implementation:
         * \code
         * class my_iuse_actor {
         *     iuse_actor *clone() const override {
         *         return new my_iuse_actor( *this );
         *     }
         * };
         * \endcode
         * The returned value should behave like the original item and must have the same type.
         */
        virtual iuse_actor *clone() const = 0;
        /**
         * Returns whether the actor is valid (exists in the generator).
         */
        virtual bool is_valid() const;
        /**
         * Returns the translated name of the action. It is used for the item action menu.
         */
        virtual std::string get_name() const;
        /**
         * Finalizes the actor. Must be called after all items are loaded.
         */
        virtual void finalize( const itype_id &/*my_item_type*/ ) { }
};

struct use_function {
    protected:
        std::unique_ptr<iuse_actor> actor;

    public:
        use_function() = default;
        use_function( const std::string &type, use_function_pointer f );
        use_function( iuse_actor *f ) : actor( f ) {}
        use_function( use_function && ) = default;
        use_function( const use_function &other );

        ~use_function() = default;

        long call( player &, item &, bool, const tripoint & ) const;
        ret_val<bool> can_call( const player &p, const item &it, bool t, const tripoint &pos ) const;

        iuse_actor *get_actor_ptr() const {
            return actor.get();
        }

        explicit operator bool() const {
            return actor != nullptr;
        }

        /** @return See @ref iuse_actor::type */
        std::string get_type() const;
        /** @return See @ref iuse_actor::get_name */
        std::string get_name() const;
        /** @return Used by @ref item::info to get description of the actor */
        void dump_info( const item &, std::vector<iteminfo> & ) const;

        use_function &operator=( iuse_actor *f );
        use_function &operator=( use_function && ) = default;
        use_function &operator=( const use_function &other );
};

#endif
