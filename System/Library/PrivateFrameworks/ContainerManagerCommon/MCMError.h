//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMError : NSObject
{
    int _POSIXerrno;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    unsigned long long _category;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000034b3e
@property(readonly, nonatomic) int POSIXerrno; // @synthesize POSIXerrno=_POSIXerrno;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000349c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000034932
- (_Bool)isEqualToMCMError:(id)arg1;	// IMP=0x0000000000034879
- (unsigned long long)hash;	// IMP=0x0000000000034827
- (id)fullDescription;	// IMP=0x000000000003479d
- (id)description;	// IMP=0x0000000000034713
- (struct container_error_extended_s *)libsystemError;	// IMP=0x000000000003464b
- (id)initWithNSError:(id)arg1 url:(id)arg2 defaultErrorType:(unsigned long long)arg3;	// IMP=0x000000000003448a
- (id)initWithErrorType:(unsigned long long)arg1 category:(unsigned long long)arg2 path:(id)arg3 POSIXerrno:(int)arg4;	// IMP=0x00000000000343b8
- (id)initWithErrorType:(unsigned long long)arg1 category:(unsigned long long)arg2;	// IMP=0x0000000000034375
- (id)initWithErrorType:(unsigned long long)arg1;	// IMP=0x0000000000034330
- (id)init;	// IMP=0x00000000000342e6
- (id)initWithLibsystemError:(struct container_error_extended_s *)arg1;	// IMP=0x00000000000341fd

@end

