//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLAutoCohortUtilities : NSObject
{
}

+ (id)computeAutoCohortMapWithStarterGraph:(id)arg1;	// IMP=0x008000000001915b
+ (_Bool)isEdgeKnownToCauseCycle:(id)arg1;	// IMP=0x0080000000018e77
+ (void)markUnvettedUnsafe;	// IMP=0x0080000000018e57
+ (void)markUnvettedSafe;	// IMP=0x0080000000018e37
+ (void)markUnvetted:(id)arg1;	// IMP=0x0080000000018b98
+ (void)persistEdgeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0080000000018b18
+ (void)writeEdge:(id)arg1 toDirectory:(id)arg2;	// IMP=0x0080000000018980
+ (id)getUnsafeEdges;	// IMP=0x008000000001893d
+ (id)getSafeEdges;	// IMP=0x00800000000188fa
+ (id)getUnvettedEdges;	// IMP=0x00800000000188da
+ (id)readEdges:(id)arg1;	// IMP=0x0080000000018687
+ (id)getEdgeFilesFromDirectory:(id)arg1;	// IMP=0x0080000000018380
+ (void)createDirectoryAtPath:(id)arg1;	// IMP=0x0080000000018073
+ (void)applyEdges:(id)arg1 toGraph:(id)arg2;	// IMP=0x0080000000017c01
+ (id)layerAssignmentForNode:(id)arg1 inGraph:(id)arg2 extendingLayering:(id)arg3;	// IMP=0x008000000001795d
+ (_Bool)autoCohortingEnabled;	// IMP=0x0080000000017937
+ (void)enableAutoCohortingForProcessAtPath:(id)arg1;	// IMP=0x0080000000017507

@end

