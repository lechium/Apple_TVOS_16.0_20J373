//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemMenuUI/TVSMActionModule.h>

@class NSString, TVSMButtonViewController;

@interface TVSMExpanseNowPlayingModule : TVSMActionModule
{
    TVSMButtonViewController *_buttonVC;	// 8 = 0x8
}

+ (id)availableStyles;	// IMP=0x0010000000001a30
- (void).cxx_destruct;	// IMP=0x0000000000002820
@property(retain, nonatomic) TVSMButtonViewController *buttonVC; // @synthesize buttonVC=_buttonVC;
- (void)expanseContextDidUpdate:(id)arg1;	// IMP=0x0000000000002770
- (void)handleAction;	// IMP=0x0000000000002010
- (void)updateContextSpecificUI;	// IMP=0x0000000000001c60
- (id)contentViewController;	// IMP=0x0000000000001bd0
- (void)dealloc;	// IMP=0x0000000000001b50
- (id)init;	// IMP=0x0000000000001a50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
