//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class VMUDominatorGraph;

__attribute__((visibility("hidden")))
@interface VMUDominatorRoots : NSEnumerator
{
    VMUDominatorGraph *_dg;	// 8 = 0x8
    unsigned int _i;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008c136
- (id)nextObject;	// IMP=0x000000000008c080
- (id)initWithDominatorGraph:(id)arg1;	// IMP=0x000000000008c04d

@end
