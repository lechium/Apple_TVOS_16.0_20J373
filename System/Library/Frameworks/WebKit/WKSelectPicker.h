//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectPicker : NSObject
{
    WKContentView *_view;	// 8 = 0x8
    struct CGPoint _interactionPoint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000039d8c2
- (_Bool)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1;	// IMP=0x000000000039d8ba
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;	// IMP=0x000000000039d8b4
- (void)didSelectOptionIndex:(long long)arg1;	// IMP=0x000000000039d83d
- (void)dealloc;	// IMP=0x000000000039d80e
- (void)controlEndEditing;	// IMP=0x000000000039d7f0
- (void)controlBeginEditing;	// IMP=0x000000000039d73e
- (id)controlView;	// IMP=0x000000000039d736
- (id)initWithView:(id)arg1;	// IMP=0x000000000039d6b9

@end
