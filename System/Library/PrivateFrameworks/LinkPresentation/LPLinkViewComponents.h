//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPCaptionBarView, LPCollaborationHandleView, LPComponentView, LPContactsBadgeView, LPImageView, LPQuoteView, UIView;

__attribute__((visibility("hidden")))
@interface LPLinkViewComponents : NSObject
{
    LPCaptionBarView *_captionBar;	// 8 = 0x8
    LPComponentView *_media;	// 16 = 0x10
    UIView *_mediaBackground;	// 24 = 0x18
    LPCaptionBarView *_mediaTopCaptionBar;	// 32 = 0x20
    LPCaptionBarView *_mediaBottomCaptionBar;	// 40 = 0x28
    LPQuoteView *_quote;	// 48 = 0x30
    LPImageView *_backgroundImage;	// 56 = 0x38
    LPContactsBadgeView *_contactsBadge;	// 64 = 0x40
    LPCollaborationHandleView *_collaborationHandle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000005820b
@property(retain, nonatomic) LPCollaborationHandleView *collaborationHandle; // @synthesize collaborationHandle=_collaborationHandle;
@property(retain, nonatomic) LPContactsBadgeView *contactsBadge; // @synthesize contactsBadge=_contactsBadge;
@property(retain, nonatomic) LPImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) LPQuoteView *quote; // @synthesize quote=_quote;
@property(retain, nonatomic) LPCaptionBarView *mediaBottomCaptionBar; // @synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar;
@property(retain, nonatomic) LPCaptionBarView *mediaTopCaptionBar; // @synthesize mediaTopCaptionBar=_mediaTopCaptionBar;
@property(retain, nonatomic) UIView *mediaBackground; // @synthesize mediaBackground=_mediaBackground;
@property(retain, nonatomic) LPComponentView *media; // @synthesize media=_media;
@property(retain, nonatomic) LPCaptionBarView *captionBar; // @synthesize captionBar=_captionBar;
- (void)applyToAllViews:(CDUnknownBlockType)arg1;	// IMP=0x0000000000058078

@end

