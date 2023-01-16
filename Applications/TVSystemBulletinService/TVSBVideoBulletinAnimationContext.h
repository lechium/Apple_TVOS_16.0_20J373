//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVHomeUI/TVHMCameraAnimationContext.h>

@class NSAttributedString, NSString, UIImage;

@interface TVSBVideoBulletinAnimationContext : TVHMCameraAnimationContext
{
    NSString *_chinTitle;	// 8 = 0x8
    NSAttributedString *_chinSubtitle;	// 16 = 0x10
    UIImage *_chinImage;	// 24 = 0x18
    struct CGRect _bulletinFrame;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000f520
@property(retain, nonatomic) UIImage *chinImage; // @synthesize chinImage=_chinImage;
@property(retain, nonatomic) NSAttributedString *chinSubtitle; // @synthesize chinSubtitle=_chinSubtitle;
@property(retain, nonatomic) NSString *chinTitle; // @synthesize chinTitle=_chinTitle;
@property(nonatomic) struct CGRect bulletinFrame; // @synthesize bulletinFrame=_bulletinFrame;

@end

