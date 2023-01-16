//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface WFThreeWayMergingObjectGraph : NSObject
{
    CDUnknownBlockType _vertexComparator;	// 8 = 0x8
    NSMutableOrderedSet *_orderedVertexes;	// 16 = 0x10
    NSMapTable *_directSuccessorsForVertexes;	// 24 = 0x18
    NSMapTable *_directPredecessorsForVertexes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002520d5
- (id)description;	// IMP=0x000000000025204b

@end

