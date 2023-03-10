//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNMPClusteringTreeNodeWrapper : NSObject
{
    _Bool _freeNodeOnDealloc;	// 8 = 0x8
    void *_node;	// 16 = 0x10
}

@property _Bool freeNodeOnDealloc; // @synthesize freeNodeOnDealloc=_freeNodeOnDealloc;
@property void *node; // @synthesize node=_node;
- (void)dealloc;	// IMP=0x000000000009d317
- (id)getLeafNodes;	// IMP=0x000000000009d216
- (int)leafsCount;	// IMP=0x000000000009d209
- (float)avgDistance;	// IMP=0x000000000009d1fa
- (float)distance;	// IMP=0x000000000009d1eb
- (id)right;	// IMP=0x000000000009d1a5
- (id)left;	// IMP=0x000000000009d15f
- (id)descriptor;	// IMP=0x000000000009d14e
- (int)nodeId;	// IMP=0x000000000009d141
- (id)initWithNode:(void *)arg1 freeNodeOnDealloc:(_Bool)arg2;	// IMP=0x000000000009d0af

@end

