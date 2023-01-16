//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NSCoreDataXPCMessage : NSObject
{
    unsigned long long _messageCode;	// 8 = 0x8
    _Bool _allowAncillary;	// 16 = 0x10
    NSData *_messageBody;	// 24 = 0x18
    NSString *_token;	// 32 = 0x20
    NSString *_contextName;	// 40 = 0x28
    NSString *_contextTransactionAuthor;	// 48 = 0x30
    NSString *_processName;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000031167
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000031336
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000311e9
- (void)dealloc;	// IMP=0x000000000003116f

@end

