//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSBundleProxy, NSArray, NSOperationQueue, SDAirDropHandler, SDAirDropHandleriCloudDrive;

@interface SDAirDropHandlerGenericFiles
{
    NSOperationQueue *_workOperationsQueue;	// 8 = 0x8
    SDAirDropHandleriCloudDrive *_icloudDriveHandler;	// 16 = 0x10
    SDAirDropHandler *_selectedHandler;	// 24 = 0x18
    LSBundleProxy *_selectedProxy;	// 32 = 0x20
    _Bool _willUseOpenWithAlert;	// 40 = 0x28
    NSArray *_availableApplications;	// 48 = 0x30
    LSBundleProxy *_selectedApplication;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000abfa9
@property(retain, nonatomic) LSBundleProxy *selectedApplication; // @synthesize selectedApplication=_selectedApplication;
@property(copy, nonatomic) NSArray *availableApplications; // @synthesize availableApplications=_availableApplications;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000000abefa
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x00100000000abe36
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;	// IMP=0x00100000000abd4b
- (void)performActionWithBundleProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ab6d9
- (void)addOpenWithActions;	// IMP=0x00100000000ab38d
- (void)acceptActionTriggered;	// IMP=0x00100000000ab29a
- (_Bool)shouldOpenAutomaticallyAfterUserAccepts;	// IMP=0x00100000000ab1a2
- (id)actionForBundleProxy:(id)arg1;	// IMP=0x00100000000aafed
- (id)cancelActionTitleToAccompanyActions:(id)arg1;	// IMP=0x00100000000aaf8c
- (void)updatePossibleActions;	// IMP=0x00100000000aac58
- (id)suitableContentsDescription;	// IMP=0x00100000000aaa22
- (id)firstReceivedFilename;	// IMP=0x00100000000aa957
- (long long)transferTypes;	// IMP=0x00100000000aa922
- (_Bool)canHandleTransfer;	// IMP=0x00100000000aa910
- (id)initWithTransfer:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00100000000aa839
- (id)initWithTransfer:(id)arg1;	// IMP=0x00100000000aa825

@end

