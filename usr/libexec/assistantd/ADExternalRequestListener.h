//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext;
@protocol OS_xpc_object;

@interface ADExternalRequestListener : NSObject
{
    NSObject<OS_xpc_object> *_externalRequestListener;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000fddaa
- (void)listen;	// IMP=0x00100000000fdb89
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00100000000fdafa
- (id)init;	// IMP=0x00100000000fdaa0

@end

