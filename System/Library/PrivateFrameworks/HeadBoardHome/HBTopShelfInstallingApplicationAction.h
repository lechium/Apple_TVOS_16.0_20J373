//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HBTopShelfInstallApplicationAction, NSProgress;

__attribute__((visibility("hidden")))
@interface HBTopShelfInstallingApplicationAction
{
    NSProgress *_installApplicationProgress;	// 8 = 0x8
    HBTopShelfInstallApplicationAction *_installApplicationAction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004cbfb
@property(retain, nonatomic) HBTopShelfInstallApplicationAction *installApplicationAction; // @synthesize installApplicationAction=_installApplicationAction;
- (id)installApplicationProgress;	// IMP=0x000000000004cbc5
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000004cb33
- (void)updateInstallApplicationPercentage:(double)arg1;	// IMP=0x000000000004ca06
- (id)initWithInstallApplicationAction:(id)arg1;	// IMP=0x000000000004c960

@end

