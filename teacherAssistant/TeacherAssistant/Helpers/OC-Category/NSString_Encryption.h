//
//  NSString_Encryption.h
//  TeacherAssistant
//
//  Created by MyUpinup on 15/1/9.
//  Copyright (c) 2015年 MyUpinup. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface NSString_Encryption : NSObject
+ (NSString *)getMd5_32Bit_String:(NSString *)srcString;
+ (NSString *)getMd5_16Bit_String:(NSString *)srcString;
+ (NSString *)getSha1String:(NSString *)srcString;
@end
