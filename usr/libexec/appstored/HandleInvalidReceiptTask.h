//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface HandleInvalidReceiptTask
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSURL *_bundleURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001a1516
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)_presentSystemDialogWithTitle:(id)arg1 dialogMessage:(id)arg2 actionURL:(id)arg3;	// IMP=0x00100000001a10e2
- (id)productURLForAppWithID:(id)arg1;	// IMP=0x00100000001a1078
- (void)terminateApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x00100000001a0ff3
- (id)dialogRequestWithTitle:(id)arg1 dialogMessage:(id)arg2;	// IMP=0x00100000001a0ee4
- (void)main;	// IMP=0x00100000001a0aa4
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00100000001a0a36
- (id)initWithBundleIdentifier:(id)arg1 bundleURL:(id)arg2;	// IMP=0x00100000001a0994

@end

