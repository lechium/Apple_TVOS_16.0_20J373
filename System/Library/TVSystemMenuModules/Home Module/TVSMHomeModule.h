//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemMenuUI/TVSMExpandingModule.h>

@class TVSMHomeModuleExpandedViewController;

@interface TVSMHomeModule : TVSMExpandingModule
{
    TVSMHomeModuleExpandedViewController *_prewarmedViewController;	// 8 = 0x8
}

+ (id)availableStyles;	// IMP=0x006000000000f3f0
- (void).cxx_destruct;	// IMP=0x000000000000faa0
@property(retain, nonatomic) TVSMHomeModuleExpandedViewController *prewarmedViewController; // @synthesize prewarmedViewController=_prewarmedViewController;
- (id)analyticsElementInfo;	// IMP=0x000000000000f9d0
- (id)analyticsActionType;	// IMP=0x000000000000f9b0
- (void)prewarmViewController;	// IMP=0x000000000000f770
- (id)expandedContentViewController;	// IMP=0x000000000000f6a0
- (_Bool)dismissAfterAction;	// IMP=0x000000000000f680
- (id)init;	// IMP=0x000000000000f410

@end

