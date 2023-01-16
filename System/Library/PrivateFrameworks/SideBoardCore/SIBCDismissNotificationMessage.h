//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SIBCDismissNotificationMessage : NSObject
{
    NSString *_applicationId;	// 8 = 0x8
    NSString *_foregroundApp;	// 16 = 0x10
}

+ (id)messageId;	// IMP=0x001000000000cdb4
- (void).cxx_destruct;	// IMP=0x000000000000ce92
@property(readonly, nonatomic) NSString *foregroundApp; // @synthesize foregroundApp=_foregroundApp;
@property(readonly, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
@property(readonly, copy) NSString *description;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x000000000000ca43
- (id)dictionaryEncoding;	// IMP=0x000000000000ca3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
