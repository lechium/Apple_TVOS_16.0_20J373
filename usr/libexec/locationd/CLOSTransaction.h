//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface CLOSTransaction : NSObject
{
    NSString *_description;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x00200000003c78e6
- (id)initWithDescription:(const char *)arg1;	// IMP=0x00100000003c7780

@end

