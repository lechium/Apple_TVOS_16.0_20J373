//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@interface GKCacheObject : NSManagedObject
{
}

+ (id)attributesDescriptionsForAttributesWithKeys:(id)arg1;	// IMP=0x004000000004aaf3
+ (id)uniqueObjectIDLookupWithContext:(id)arg1;	// IMP=0x001000000004a962
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x001000000004a841
+ (id)uniqueAttributeName;	// IMP=0x001000000004a720
+ (void)deleteObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000004a322
+ (id)firstObjectMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0010000000049f3d
+ (unsigned long long)countObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0010000000049cf7
+ (id)objectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0010000000049aa5
+ (id)allObjectsInContext:(id)arg1;	// IMP=0x0010000000049a8e
+ (id)fetchSortDescriptors;	// IMP=0x0010000000049a86
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x0010000000049a7e
+ (id)fetchRequestForContext:(id)arg1;	// IMP=0x0010000000049862
+ (id)entityInManagedObjectContext:(id)arg1;	// IMP=0x00100000000491dd
+ (id)entityName;	// IMP=0x00100000000490c4
- (void)invalidate;	// IMP=0x002000000004a71a
- (_Bool)isValid;	// IMP=0x001000000004a712
- (id)initWithManagedObjectContext:(id)arg1;	// IMP=0x001000000004954e
- (id)internalRepresentation;	// IMP=0x00100000000490bc
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0010000000048f39
- (_Bool)hasImages;	// IMP=0x001000000004c083
- (void)clearImages;	// IMP=0x001000000004bcf0
- (void)deleteCachedImage:(id)arg1;	// IMP=0x001000000004b83e
- (id)imageURLDictionary;	// IMP=0x001000000004b3bf
- (id)updateImagesWithImageURLs:(id)arg1;	// IMP=0x001000000004ae31
- (id)imageCacheKeyPathsByKey;	// IMP=0x001000000004ac63

@end

