/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTilePool : NSObject {
    GEOTileCache * _cache;
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    struct _GEOGenericContainer<_GEOTileKey, id, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> { 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } _lock; 
        struct list<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr> > > { 
            struct __list_node_base<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> { 
                struct __list_node_base<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> {} *__prev_; 
                struct __list_node_base<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> {} *__next_; 
            } __end_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> > > { 
                unsigned long long __first_; 
            } __size_alloc_; 
        } _list; 
        struct unordered_map<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *>, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> > > > { 
            struct __hash_table<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, std::__1::hash<GEOTileKey>, true>, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, std::__1::equal_to<GEOTileKey>, true>, std::__1::allocator<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> > > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, void *> *> {} **__first_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, void *> *> *> > { 
                                unsigned long long __first_; 
                            } __data_; 
                        } __second_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, void *> *> {} *__next_; 
                    } __first_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, std::__1::hash<GEOTileKey>, true> > { 
                    unsigned long long __first_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, _value_ptr>, void *> >, std::__1::equal_to<GEOTileKey>, true> > { 
                    float __first_; 
                } __p3_; 
            } __table_; 
        } _map; 
        unsigned long long _maxCapacity; 
        unsigned long long _maxCost; 
        unsigned long long _currentCost; 
        unsigned long long _currentCount; 
    }  _pool;
}

@property (nonatomic, readonly) unsigned long long currentCost;
@property (nonatomic, readonly) unsigned long long currentCount;
@property unsigned long long maxCapacity;
@property unsigned long long maxCost;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_enteredBackground:(id)arg1;
- (void)_receivedMemoryNotification;
- (bool)containsKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 cost:(unsigned long long*)arg2;
- (unsigned long long)currentCost;
- (unsigned long long)currentCount;
- (void)enumerate:(id /* block */)arg1;
- (id)init;
- (id)initWithSideCacheEnabled:(bool)arg1;
- (unsigned long long)maxCapacity;
- (unsigned long long)maxCost;
- (void)removeAllObjects;
- (void)removeTileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)removeTilesMatchingPredicate:(id /* block */)arg1;
- (void)removeTilesWithKeys:(id)arg1;
- (void)setMaxCapacity:(unsigned long long)arg1;
- (void)setMaxCost:(unsigned long long)arg1;
- (void)setNullForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)setTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 cost:(unsigned long long)arg3;
- (id)tileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

@end
