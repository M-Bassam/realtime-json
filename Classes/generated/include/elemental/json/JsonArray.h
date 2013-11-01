//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _GDJsonArray_H_
#define _GDJsonArray_H_

@protocol GDJsonObject;

#import "JreEmulation.h"
#include "elemental/json/JsonValue.h"

@protocol GDJsonArray < GDJsonValue, NSObject, JavaObject >
- (id)get:(int)index;
- (id<GDJsonArray>)getArray:(int)index;
- (BOOL)getBoolean:(int)index;
- (double)getNumber:(int)index;
- (id<GDJsonObject>)getObject:(int)index;
- (NSString *)getString:(int)index;
- (int)length;
- (void)remove:(int)index;
- (void)set:(int)index value:(id<GDJsonValue>)value;
- (void)set:(int)index string:(NSString *)string;
- (void)set:(int)index number:(double)number;
- (void)set:(int)index boolean:(BOOL)bool_;
- (void)insert:(int)index value:(id<GDJsonValue>)value;
@end

#define ElementalJsonJsonArray GDJsonArray

#endif // _GDJsonArray_H_