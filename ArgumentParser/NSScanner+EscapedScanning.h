//
//  NSScanner+EscapedScanning.h
//  ArgumentParser
//
//  Created by Christopher Miller on 5/17/12.
//  Copyright (c) 2012 Christopher Miller. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSScanner (EscapedScanning)

- (void)fsargs_scanUpToCharacterFromSet:(NSCharacterSet *)upTo unlessPrecededByCharacterFromSet:(NSCharacterSet *)escapedBy intoString:(__autoreleasing NSString **)into;

@end
