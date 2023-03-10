//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSExtension, NSString;
@protocol CNContactViewHostProtocol, NSCopying;

__attribute__((visibility("hidden")))
@interface CNContactViewHostViewController : _UIRemoteViewController
{
    id <CNContactViewHostProtocol> _delegate;	// 8 = 0x8
    id <NSCopying> _currentRequestIdentifier;	// 16 = 0x10
    NSExtension *_extension;	// 24 = 0x18
}

+ (_Bool)getViewController:(CDUnknownBlockType)arg1;	// IMP=0x001000000005793d
+ (id)contextForIdentifier:(id)arg1;	// IMP=0x00100000000578c1
+ (id)contactViewExtension;	// IMP=0x00100000000577d8
- (void).cxx_destruct;	// IMP=0x0000000000058103
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) id <NSCopying> currentRequestIdentifier; // @synthesize currentRequestIdentifier=_currentRequestIdentifier;
@property __weak id <CNContactViewHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void)isPresentingFullscreen:(_Bool)arg1;	// IMP=0x0000000000058040
- (void)didDeleteContact:(id)arg1;	// IMP=0x0000000000057fce
- (void)didCompleteWithContact:(id)arg1;	// IMP=0x0000000000057f5c
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;	// IMP=0x0000000000057edf
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x0000000000057e3b
- (void)toggleEditing;	// IMP=0x0000000000057dfe
- (void)editCancel;	// IMP=0x0000000000057dc1
- (void)didChangeToEditMode:(_Bool)arg1;	// IMP=0x0000000000057d75
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057cef
- (id)protocolContext;	// IMP=0x0000000000057c85
- (void)invalidate;	// IMP=0x0000000000057bae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

