//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CKDContainerServerInfo : NSObject
{
    NSURL *_publicCloudDBURL;	// 8 = 0x8
    NSURL *_publicShareServiceURL;	// 16 = 0x10
    NSURL *_publicDeviceServiceURL;	// 24 = 0x18
    NSURL *_publicCodeServiceURL;	// 32 = 0x20
    NSURL *_publicMetricsServiceURL;	// 40 = 0x28
    NSString *_containerScopedUserID;	// 48 = 0x30
    NSString *_orgAdminUserID;	// 56 = 0x38
    long long _environment;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000cf89d
- (void).cxx_destruct;	// IMP=0x00000000000cfd51
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *orgAdminUserID; // @synthesize orgAdminUserID=_orgAdminUserID;
@property(copy, nonatomic) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(copy, nonatomic) NSURL *publicMetricsServiceURL; // @synthesize publicMetricsServiceURL=_publicMetricsServiceURL;
@property(copy, nonatomic) NSURL *publicCodeServiceURL; // @synthesize publicCodeServiceURL=_publicCodeServiceURL;
@property(copy, nonatomic) NSURL *publicDeviceServiceURL; // @synthesize publicDeviceServiceURL=_publicDeviceServiceURL;
@property(copy, nonatomic) NSURL *publicShareServiceURL; // @synthesize publicShareServiceURL=_publicShareServiceURL;
@property(copy, nonatomic) NSURL *publicCloudDBURL; // @synthesize publicCloudDBURL=_publicCloudDBURL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cfaa7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cf8a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cf5db
- (unsigned long long)hash;	// IMP=0x00000000000cf446
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cedf8
- (id)description;	// IMP=0x00000000000cede6
- (id)CKPropertiesDescription;	// IMP=0x00000000000cec63
- (id)init;	// IMP=0x00000000000cec27

@end

