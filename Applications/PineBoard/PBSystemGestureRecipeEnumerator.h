//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@interface PBSystemGestureRecipeEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;	// 8 = 0x8
    CDUnknownBlockType _recipeProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000021bad
@property(readonly, nonatomic) CDUnknownBlockType recipeProvider; // @synthesize recipeProvider=_recipeProvider;
@property(readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
- (id)nextObject;	// IMP=0x0010000000021ad3
- (id)initWithRecipeProvider:(CDUnknownBlockType)arg1 typeEnumerator:(id)arg2;	// IMP=0x0010000000021a25

@end

