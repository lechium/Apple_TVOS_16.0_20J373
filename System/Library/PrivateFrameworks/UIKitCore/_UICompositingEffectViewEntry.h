//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICompositingEffectViewEntry
{
    NSString *_filterType;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d878a
@property(copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
- (id)description;	// IMP=0x00000000000d86e9
- (_Bool)canTransitionToEffect:(id)arg1;	// IMP=0x00000000000d86e1
- (_Bool)isSameTypeOfEffect:(id)arg1;	// IMP=0x00000000000d863d
- (void)removeEffectFromView:(id)arg1;	// IMP=0x00000000000d85fb
- (void)addEffectToView:(id)arg1;	// IMP=0x00000000000d85a4

@end

