//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _UIDebugLogNode;

__attribute__((visibility("hidden")))
@interface _UIDebugLogStack : NSObject
{
    NSMutableArray *_stack;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c13f9f
- (void)performWithPushedNode:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c13ca9
- (id)popNode;	// IMP=0x0000000000c13bdf
- (void)pushNode:(id)arg1;	// IMP=0x0000000000c13ad5
- (void)addMessage:(id)arg1;	// IMP=0x0000000000c139dc
@property(readonly, nonatomic) _UIDebugLogNode *rootNode;
- (id)_topNode;	// IMP=0x0000000000c139b0
- (id)init;	// IMP=0x0000000000c13915

@end

