//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class PGGraph, PGGraphFeatureNodeCollection, PGGraphMomentNodeCollection;

@protocol PGGraphMemoryProtocol <NSObject>
- (PGGraphFeatureNodeCollection *)memoryFeatureNodesInGraph:(PGGraph *)arg1;
@property(nonatomic, readonly) _Bool generatedWithFallbackRequirements;
@property(nonatomic, readonly) PGGraphMomentNodeCollection *memoryMomentNodes;
@property(nonatomic, readonly) unsigned long long memoryCategorySubcategory;
@property(nonatomic, readonly) unsigned long long memoryCategory;
@end
