//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNQuickAction, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNQuickDisambiguateAction
{
    _Bool _ignoreMainAction;	// 120 = 0x78
    NSOrderedSet *_actions;	// 128 = 0x80
    CNQuickAction *_mainAction;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000001a8d5
@property(nonatomic) _Bool ignoreMainAction; // @synthesize ignoreMainAction=_ignoreMainAction;
@property(nonatomic) __weak CNQuickAction *mainAction; // @synthesize mainAction=_mainAction;
@property(retain, nonatomic) NSOrderedSet *actions; // @synthesize actions=_actions;
- (id)description;	// IMP=0x000000000001a7b4
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a0e5
- (id)subtitleForContext:(long long)arg1;	// IMP=0x000000000001a088
- (id)titleForContext:(long long)arg1;	// IMP=0x0000000000019f8e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019e92
- (id)initWithActions:(id)arg1;	// IMP=0x0000000000019e22

@end

