//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKServerChangeToken;

@interface SHLCloudBackedToken : NSObject
{
    CKServerChangeToken *_serverChangeToken;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000039e74
@property(readonly, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
- (id)initWithToken:(id)arg1;	// IMP=0x0010000000039dff

@end

