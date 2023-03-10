//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, _UIDebugLogNodeTreeStyle;

__attribute__((visibility("hidden")))
@interface _UIDebugLogNode
{
    NSMutableArray *_childMessages;	// 24 = 0x18
    _UIDebugLogNodeTreeStyle *_treeStyle;	// 32 = 0x20
}

+ (id)rootNode;	// IMP=0x0060000000c12ca7
- (void).cxx_destruct;	// IMP=0x0000000000c1347e
@property(retain, nonatomic) _UIDebugLogNodeTreeStyle *treeStyle; // @synthesize treeStyle=_treeStyle;
- (id)attributedDescription;	// IMP=0x0000000000c133ec
- (id)description;	// IMP=0x0000000000c1337f
- (void)_appendAttributedChildDescription:(id)arg1 withPrefix:(id)arg2 inheritedTreeStyle:(id)arg3;	// IMP=0x0000000000c1327e
- (void)_appendChildDescription:(id)arg1 withPrefix:(id)arg2 inheritedTreeStyle:(id)arg3;	// IMP=0x0000000000c131c4
- (void)__genericAppendChildDescription:(id)arg1 withPrefix:(id)arg2 inheritedTreeStyle:(id)arg3 recursionSelector:(SEL)arg4 appendHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000c12d22
- (void)addMessage:(id)arg1;	// IMP=0x0000000000c12d05
@property(readonly, nonatomic) _Bool hasMessages;
- (_Bool)_isNode;	// IMP=0x0000000000c12cd9
- (id)initWithString:(id)arg1 attributedString:(id)arg2;	// IMP=0x0000000000c12c4a

@end

