//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GKNoiseModifier : NSObject
{
    NSMutableArray *_inputModules;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003652d
- (id)cloneModule;	// IMP=0x0000000000036455
- (void)setInputModule:(id)arg1 atIndex:(int)arg2;	// IMP=0x000000000003643b
- (id)inputModuleAtIndex:(int)arg1;	// IMP=0x0000000000036422
- (double)valueAt: /* Error: Ran out of types for this method. */;	// IMP=0x000000000003634a
- (int)requiredInputModuleCount;	// IMP=0x0000000000036272
- (id)initWithInputModuleCount:(unsigned long long)arg1;	// IMP=0x00000000000361e1
- (id)init;	// IMP=0x00000000000360f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

