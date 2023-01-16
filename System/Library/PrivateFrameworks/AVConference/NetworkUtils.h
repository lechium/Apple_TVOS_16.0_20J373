//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NetworkUtils : NSObject
{
}

+ (id)encryptionInfoForKey:(unsigned long long)arg1;	// IMP=0x00800000003444f7
+ (id)newEncryptionInfoWithMediaKeyIndex:(id)arg1;	// IMP=0x00800000003443cb
+ (id)securityKeyMaterialWithMediaKeyIndex:(id)arg1;	// IMP=0x0080000000344271
+ (id)newRTPSocketDictionary:(_Bool)arg1 rtpSourcePort:(short)arg2;	// IMP=0x0080000000344134
+ (int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 shouldConnect:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0080000000344015
+ (int)nonConnectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id *)arg3;	// IMP=0x0080000000343ff6
+ (int)connectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id *)arg3;	// IMP=0x0080000000343fd4
+ (int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id *)arg3;	// IMP=0x0080000000343fb5
+ (id)newNWConnectionWithIPAddress:(id)arg1 srcPort:(short)arg2;	// IMP=0x0080000000343f2b
+ (_Bool)createNWPathEvaluator:(id *)arg1 withIPAddress:(id)arg2 localPort:(int *)arg3 remotePort:(int)arg4 shouldRunInProcess:(_Bool)arg5 useBackingSocket:(_Bool)arg6;	// IMP=0x0080000000343c8f
+ (void)setUniquePIDOnParameters:(id)arg1 shouldRunInProcess:(_Bool)arg2;	// IMP=0x0080000000343bb8
+ (_Bool)createAndStartListener:(id *)arg1 withParameters:(id)arg2;	// IMP=0x00800000003439d6

@end

