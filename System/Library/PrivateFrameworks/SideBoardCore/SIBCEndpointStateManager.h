//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SIBCEndpointStateManager : NSObject
{
    NSMutableArray *_objects;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b9fc
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000000b9e6
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)objectForEndpointId:(id)arg1;	// IMP=0x000000000000b975
- (unsigned long long)_indexForEndpointId:(id)arg1;	// IMP=0x000000000000b883
- (void)_removeObjectForEndpointId:(id)arg1;	// IMP=0x000000000000b83d
- (void)removeObjectForEndpointId:(id)arg1;	// IMP=0x000000000000b82b
- (void)removeObject:(id)arg1;	// IMP=0x000000000000b7dc
- (void)addObject:(id)arg1;	// IMP=0x000000000000b710
- (id)init;	// IMP=0x000000000000b6ba

@end
