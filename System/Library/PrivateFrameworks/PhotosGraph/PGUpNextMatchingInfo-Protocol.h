//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class CLLocation, NSDate, NSString, PGGraphMeaningNodeCollection, PGGraphMomentNodeCollection, PGGraphSceneNodeCollection;

@protocol PGUpNextMatchingInfo <NSObject>
@property(nonatomic, readonly) NSString *debugInfo;
@property(nonatomic, readonly) NSDate *representativeDate;
@property(nonatomic, readonly) CLLocation *representativeLocation;
@property(nonatomic, readonly) _Bool isTripMemory;
@property(nonatomic, readonly) id memoryFeatureNodes;
@property(nonatomic, readonly) PGGraphMeaningNodeCollection *meaningNodes;
@property(nonatomic, readonly) PGGraphSceneNodeCollection *sceneNodes;
@property(nonatomic, readonly) id personNodes;
@property(nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@end

