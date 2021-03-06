/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer> {
    BOOL _needsFixedOrderKeysComplianceUpdate;
    BOOL _needsPersistenceUpdate;
}

@property (nonatomic, readonly, retain) NSString *_prettyDescription;
@property (nonatomic, readonly, retain) NSString *_typeDescription;
@property (nonatomic, readonly) unsigned int albumsCount;
@property (nonatomic, readonly, copy) id /* block */ albumsSortingComparator;
@property (nonatomic, retain) NSOrderedSet *childCollections;
@property (nonatomic, readonly) unsigned int containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int filter;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isFolder;
@property (nonatomic) BOOL needsFixedOrderKeysComplianceUpdate;
@property (nonatomic) BOOL needsPersistenceUpdate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int unreadAlbumsCount;

+ (id)childKeyForOrdering;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

- (id)_prettyDescription;
- (id)_typeDescription;
- (void)addChildCollections:(id)arg1;
- (void)addChildCollectionsObject:(id)arg1;
- (BOOL)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (short)albumListType;
- (id)albums;
- (unsigned int)albumsCount;
- (id /* block */)albumsSortingComparator;
- (unsigned int)approximateCount;
- (id)assets;
- (unsigned int)assetsCount;
- (BOOL)canEditAlbums;
- (BOOL)canEditContainers;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (id)childKeyForOrdering;
- (id)containers;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (unsigned int)count;
- (id)descriptionOfChildCollectionOrderValues;
- (void)didSave;
- (void)enforceFixedOrderKeyCompliance;
- (int)filter;
- (BOOL)hasAtLeastOneAlbum;
- (id)identifier;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned int)arg2;
- (BOOL)isEmpty;
- (BOOL)isValidKindForPersistence;
- (void)migration_handleChildOrderKeys;
- (id)migration_newOrderKeyChild:(id)arg1;
- (id)migration_sortedOrderKeysForChildrenUsingMap:(id)arg1;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned int)arg2;
- (id)mutableAssets;
- (BOOL)needsFixedOrderKeysComplianceUpdate;
- (BOOL)needsPersistenceUpdate;
- (BOOL)needsReordering;
- (void)persistMetadataToFileSystem;
- (unsigned int)photosCount;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)prepareForDeletion;
- (void)refreshCollections;
- (void)removeChildCollections:(id)arg1;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)removeChildCollectionsObject:(id)arg1;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned int)arg1;
- (void)removePersistedFileSystemData;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)setNeedsFixedOrderKeysComplianceUpdate:(BOOL)arg1;
- (void)setNeedsPersistenceUpdate:(BOOL)arg1;
- (void)setNeedsReordering;
- (unsigned int)unreadAlbumsCount;
- (void)updateAlbumsOrderIfNeeded;
- (unsigned int)videosCount;
- (void)willSave;

@end
