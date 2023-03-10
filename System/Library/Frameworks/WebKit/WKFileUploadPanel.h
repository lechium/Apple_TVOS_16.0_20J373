//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString;
@protocol WKFileUploadPanelDelegate;

__attribute__((visibility("hidden")))
@interface WKFileUploadPanel : UIViewController
{
    struct WeakObjCPtr<WKContentView> _view;	// 8 = 0x8
    struct RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::RawPtrTraits<WebKit::WebOpenPanelResultListenerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebOpenPanelResultListenerProxy>> _listener;	// 16 = 0x10
    struct RetainPtr<NSSet<NSString *>> _acceptedUTIs;	// 24 = 0x18
    struct OptionSet<WKFileUploadPanelImagePickerType> _allowedImagePickerTypes;	// 32 = 0x20
    struct CGPoint _interactionPoint;	// 40 = 0x28
    _Bool _allowMultipleFiles;	// 56 = 0x38
    _Bool _usingCamera;	// 57 = 0x39
    struct RetainPtr<UIImagePickerController> _imagePicker;	// 64 = 0x40
    struct RetainPtr<UIViewController> _presentationViewController;	// 72 = 0x48
    _Bool _isPresentingSubMenu;	// 80 = 0x50
    struct RetainPtr<UIDocumentPickerViewController> _documentPickerController;	// 88 = 0x58
    int _mediaCaptureType;	// 96 = 0x60
    id <WKFileUploadPanelDelegate> _delegate;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x00000000003980e2
- (void).cxx_destruct;	// IMP=0x0000000000398020
@property(nonatomic) __weak id <WKFileUploadPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)platformSupportsPickerViewController;	// IMP=0x0000000000397ff3
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000397dff
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000397d34
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000397c2c
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000397a3c
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003979df
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x00000000003979ac
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;	// IMP=0x00000000003977de
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x00000000003975ab
- (_Bool)_willMultipleSelectionDelegateBeCalled;	// IMP=0x0000000000397586
- (void)documentPickerWasCancelled:(id)arg1;	// IMP=0x0000000000397553
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x000000000039749c
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x000000000039748a
- (void)_presentFullscreenViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003973e5
- (void)_showPhotoPickerWithSourceType:(long long)arg1;	// IMP=0x00000000003972a2
- (_Bool)_shouldMediaCaptureOpenMediaDevice;	// IMP=0x0000000000397273
- (void)_adjustMediaCaptureType;	// IMP=0x00000000003971d5
- (void)showDocumentPickerMenu;	// IMP=0x0000000000397199
- (void)showFilePickerMenu;	// IMP=0x0000000000396ffb
- (id)_cameraButtonLabel;	// IMP=0x0000000000396f13
- (id)_photoLibraryButtonLabel;	// IMP=0x0000000000396e8a
- (id)_chooseFilesButtonLabel;	// IMP=0x0000000000396dde
- (id)_mediaTypesForPickerSourceType:(long long)arg1;	// IMP=0x0000000000396aaa
- (id)acceptedTypeIdentifiers;	// IMP=0x0000000000396a6d
- (id)currentAvailableActionTitles;	// IMP=0x00000000003969b7
- (void)_dismissDisplayAnimated:(_Bool)arg1;	// IMP=0x0000000000396901
- (void)dismiss;	// IMP=0x0000000000396869
- (void)presentWithParameters:(void *)arg1 resultListener:(void *)arg2;	// IMP=0x0000000000395f0b
- (void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;	// IMP=0x0000000000395bc4
- (void)_chooseMediaItems:(id)arg1;	// IMP=0x00000000003958c5
- (void)_cancel;	// IMP=0x0000000000395888
- (void)_dispatchDidDismiss;	// IMP=0x0000000000395827
- (void)dealloc;	// IMP=0x00000000003957ba
- (id)initWithView:(id)arg1;	// IMP=0x0000000000395765

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

