//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IDSKTAccountKeyResult : NSObject
{
    NSDictionary *_accountKeyByService;	// 8 = 0x8
    NSDictionary *_deviceSignatureByService;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006f040
@property(retain, nonatomic) NSDictionary *deviceSignatureByService; // @synthesize deviceSignatureByService=_deviceSignatureByService;
@property(retain, nonatomic) NSDictionary *accountKeyByService; // @synthesize accountKeyByService=_accountKeyByService;

@end

