//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HBTopShelfInstallApplicationAction, HBTopShelfInstallingApplicationAction, NSString, PBSAppInfoController;

__attribute__((visibility("hidden")))
@interface HBTopShelfAppStoreParadeItem
{
    _Bool _observingApplicationInstalls;	// 8 = 0x8
    HBTopShelfInstallApplicationAction *_installApplicationAction;	// 16 = 0x10
    HBTopShelfInstallingApplicationAction *_installingApplicationAction;	// 24 = 0x18
    PBSAppInfoController *_appInfoController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000027965
@property(nonatomic, getter=isObservingApplicationInstalls) _Bool observingApplicationInstalls; // @synthesize observingApplicationInstalls=_observingApplicationInstalls;
@property(retain, nonatomic) PBSAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(retain, nonatomic) HBTopShelfInstallingApplicationAction *installingApplicationAction; // @synthesize installingApplicationAction=_installingApplicationAction;
@property(retain, nonatomic) HBTopShelfInstallApplicationAction *installApplicationAction; // @synthesize installApplicationAction=_installApplicationAction;
- (id)_lazyInstallingApplicationAction;	// IMP=0x0000000000027841
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002773a
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x0000000000027179
- (void)_updatePrimaryAction;	// IMP=0x0000000000026abb
- (void)_didPerformAction:(id)arg1 withSuccess:(_Bool)arg2;	// IMP=0x0000000000026a0e
- (void)_willPerformAction:(id)arg1;	// IMP=0x0000000000026689
- (void)stopObservingApplicationInstalls;	// IMP=0x0000000000026565
- (void)startObservingApplicationInstalls;	// IMP=0x000000000002643e
- (void)dealloc;	// IMP=0x00000000000263d0
- (id)initWithTopShelfAppStoreCarouselItem:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000000026251

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

