//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface LPCaptionBarAccessoryView
{
    long long _type;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
    UIImageView *_accessoryView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003dfcf
- (id)_createImageViewWithImage:(id)arg1;	// IMP=0x000000000003df14
@property(readonly, nonatomic) struct CGSize size;
- (void)layoutComponentView;	// IMP=0x000000000003de49
- (id)ensureAccessoryView;	// IMP=0x000000000003dd8e
- (id)initWithHost:(id)arg1 type:(long long)arg2 side:(long long)arg3;	// IMP=0x000000000003dcee
- (id)initWithHost:(id)arg1;	// IMP=0x000000000003dce0

@end
