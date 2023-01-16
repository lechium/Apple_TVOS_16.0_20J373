//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SLConversationExtensionHostContext : NSExtensionContext
{
    CDUnknownBlockType _dismissalRequestHandler;	// 8 = 0x8
    NSString *_messageGUID;	// 16 = 0x10
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x001000000000fedf
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x001000000000fe73
- (void).cxx_destruct;	// IMP=0x00000000000102ca
@property(retain, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(copy, nonatomic) CDUnknownBlockType dismissalRequestHandler; // @synthesize dismissalRequestHandler=_dismissalRequestHandler;
- (id)createURLWithMessageGUIDForCurrentURL:(id)arg1;	// IMP=0x0000000000010117
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010020
- (void)requestDismissal;	// IMP=0x000000000000ff4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

