//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/JSExport-Protocol.h>

@protocol SCNJSValueSExport <JSExport>
+ (id)valueWithMatrix4:(struct SCNMatrix4)arg1;
+ (id)valueWithVector4:(struct SCNVector4)arg1;
+ (id)valueWithVector3:(struct SCNVector3)arg1;
@property(readonly) struct SCNMatrix4 matrix4;
@property(readonly) struct SCNVector4 vector4;
@property(readonly) struct SCNVector3 vector3;
@end

